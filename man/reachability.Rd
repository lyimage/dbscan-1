\name{reachability}
\alias{as.reachability}
\alias{plot.reachability}
\alias{print.reachability}
%- Also NEED an '\alias' for EACH other topic documented here.
\title{
  Density Reachability Structures
}
\description{
  Class "reachability" provides general functions for representing various hierarchical representations as "reachability plots", as originally defined by Ankerst et al (1999). Methods include fast implementations of the conversion algorithms introduced by Sanders et al (2003) to convert between dendrograms and reachability plot objects. 
}
\usage{
as.reachability(object, ...)
  
## S3 Method for class 'optics'
as.reachability(object, ...)

## S3 Method for class 'dendrogram'
as.reachability(object, ...)

\method{print}{reachability}(x, ...)

\method{plot}{reachability}(x, order_labels = FALSE, 
xlab = "Order", ylab = "Reachability dist.", main = "Reachability Plot", ...)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{object}{any R object that can be made into one of class "reachability", such as an object of class "optics" or "dendrogram".}
  \item{x}{object of class "reachability".}
  \item{order_labels}{ whether to plot text labels for each points reachability distance.}
  \item{xlab}{ x-axis label, defaults to "Order".}
  \item{ylab}{ y-axis label, defaults to "Reachability dist.".}
  \item{main}{ Title of the plot, defaults to "Reachability Plot".}
  \item{...}{ graphical parameters, or arguments for other methods. }
}
\details{
Dendrograms are a popular visualization tool for representing hierarchical relationships. In agglomerative clustering, dendrograms can be constructed using a variety of linkage criterion (such as single or complete linkage), many of which are frequently used to 1) visualize the density-based relationships in the data or 2) extract cluster labels from the data the dendrogram represents.

The original ordering algorithm OPTICS as described by Ankerst et al (1999) introduced the notion of 
2-dimensional representation of so-called "density-reachability" that was shown to be useful for data 
visualization. This representation was shown to essentially convey the same information as the more 
traditional dendrogram structure by Sanders et al (2003). 

Different hierarchical representations, such as dendrograms or reachability plots, may be preferable depending on the context. In smaller datasets, cluster memberships may be more easily identifeable through a dendrogram representation, particularly is the user is already familiar with tree-like representations. For larger datasets however, a reachability plot may be prefered for visualizing macro-level density relationships. 

The central idea behind a reachability plot is that the ordering in which points are plotted identifies
underlying hierarchical density representation. OPTICS linearly orders the data points such that points which are spatially closest become neighbors in the ordering. Valleys represent clusters, which can be represented hierarchically. Although the ordering is crucial to the structure of the reachability plot, its important to note that OPTICS, like DBSCAN, is not entirely deterministic and, just like the dendrogram, isomorphisms may exist  

A variety of cluster extraction methods have been proposed using reachability plots. Because both cluster 
extraction depend directly on the ordering OPTICS produces, they are part of the optics interface. Noneless, 
reachability plots can be created directly from other types of linkage trees, and vice versa. 

See \code{\link{optics}} for more information on how OPTICS is formulated. \code{\link{extractDBSCAN}} and \code{\link{extractXi}} are the two cluster extraction methods presented in the original OPTICS publication. 
}
\value{
  An object of class 'reachability' with components:
    \item{order }{ order to use for the data points in \code{x}. }
    \item{reachdist }{ reachability distance for each data point in \code{x}. }
}
\references{
Mihael Ankerst, Markus M. Breunig, Hans-Peter Kriegel, Jorg Sander (1999). OPTICS: Ordering Points To Identify the Clustering Structure. ACM SIGMOD international conference on Management of data. ACM Press. pp. 49--60.

Sander, Jorg, et al. "Automatic extraction of clusters from hierarchical clustering representations." Pacific-Asia Conference on Knowledge Discovery and Data Mining. Springer Berlin Heidelberg, 2003.
}

\author{
    Michael Hahsler and Matthew Piekenbrock
}
\note{
  Jorg Sanders name is misspelled due to R's difficulty with non-ASCII characters. 
}
\seealso{
\code{\link{dendrogram}}, \code{\link{optics}}, \code{\link{extractDBSCAN}}, \code{\link{extractXi}}, \code{\link{hclust}}.
}

\examples{
set.seed(2)
n <- 20

x <- cbind(
  x = runif(4, 0, 1) + rnorm(n, sd=0.1),
  y = runif(4, 0, 1) + rnorm(n, sd=0.1)
  )

plot(x, xlim=range(x), ylim=c(min(x)-sd(x), max(x)+sd(x)), pch=20)
text(x = x, labels = 1:nrow(x), pos=3)


### run OPTICS
res <- optics(x, eps = 10,  minPts = 2)
res

### get order
res$order

### plot produces a reachability plot
plot(res)

### Extract reachability components from OPTICS
res <- as.reachability(res)

### plot still produces a reachability plot; points 
### can be viewed by looking at the labels
plot(res, order_labels = TRUE)

### Reachability objects can be directly converted to dendrograms 
plot(as.dendrogram(res))

### The relation between dendrogram and reachability plot is symmetric 
all.equal(as.reachability(as.dendrogram(res)), res)

### Per the original 2003 paper by Ankerst, 
### a single linkage tree == OPTICS reachability plot with minPts = 2, eps = Inf
res <- optics(x, minPts = 2, eps = Inf)
reach_dend <- as.dendrogram(res)
s_linkage_tree <- as.dendrogram(hclust(dist(x), method = "single"))

## First need to reorder 
s_linkage_order <- order.dendrogram(s_linkage_tree)
s_linkage_tree <- reorder(s_linkage_tree, s_linkage_order, agglo.FUN = mean)

## Then check for equality 
all.equal(s_linkage_tree, reorder(reach_dend, s_linkage_order, agglo.FUN = mean),  
  check.attributes = FALSE, check.names = FALSE)

}
\keyword{ model }
\keyword{ clustering }
\keyword{ hierarchical clustering }
