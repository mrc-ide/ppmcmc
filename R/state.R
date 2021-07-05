#' State class
#' 
#' @description 
#' Contains the model state at a single timepoint
#' 
#' @export
state <- R6::R6Class(
  classname = "state",
  
  public = list(
    #' @field S S state
    S = NULL,
    #' @field I I state
    I = NULL,
    #' @field R R state
    R = NULL,
    
    #' Update state
    #' 
    #' @description 
    #' Updates model state
    update = function(){
      add_to_col(self$S, 0, 1)
      add_to_col(self$I, 0, 1)
      add_to_col(self$R, 0, 1)
      invisible(self)
    }
  ),
  
  private = list(
    deep_clone = function(name, value) {
      rlang::duplicate(value)
    }
  )
)

