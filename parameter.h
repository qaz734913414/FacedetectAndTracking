/*************************************************************
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <http://www.gnu.org/licenses/>.
***************************************************************/


#ifndef _PARAMETER_
#define _PARAMETER_

#define RESULT_OUTPUT_XML_FILE "output.xml"

// multi-object level tracking parameter
extern int MAX_TRACKER_NUM;
extern int MAX_TEMPLATE_SIZE;
extern int EXPERT_THRESH;
extern double BODYSIZE_TO_DETECTION_RATIO;
extern double TRACKING_TO_BODYSIZE_RATIO;
#define  TRACKING_TO_DETECTION_RATIO BODYSIZE_TO_DETECTION_RATIO*TRACKING_TO_BODYSIZE_RATIO 

//single object level parameter
extern int FRAME_RATE;
extern double TIME_WINDOW_SIZE;

//hog detection 
extern double HOG_DETECT_FRAME_RATIO;

#endif