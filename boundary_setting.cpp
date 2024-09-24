//
// Created by Kenneth Thompson on 9/10/24.
//

#include "boundary_setting.h"
// need to set the out bounds of our setting to be that of whatever boundary conditions that we are expecting
// periodic, outflow, slip or no slip,
// perfectly conducting walls (\partial_t \hat{n}\cdot\textbf{B}|_{wall} = 0 \implies \hat{N}\cdot\textbf{v}|_{wall}=0)
// Insulating Boundary (slight modificaiton where electric field can have tangential component
// vacuum region boundary