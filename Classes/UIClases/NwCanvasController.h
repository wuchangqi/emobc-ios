/**
 *  Copyright 2012 Neurowork Consulting S.L.
 *
 *  This file is part of eMobc.
 *
 *  eMobcViewController.m
 *  eMobc IOS Framework
 *
 *  eMobc is free software: you can redistribute it and/or modify
 *  it under the terms of the Affero GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  eMobc is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the Affero GNU General Public License
 *  along with eMobc.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 Copyright (C) 2010 Edward Chiang
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <UIKit/UIKit.h>
#import "CanvasLevelData.h"
#import "AppStyles.h"
#import "AppFormatsStyles.h"
#import "NwController.h"

#import "FlipsideViewController.h"
#import "Squiggle.h"


@interface NwCanvasController : NwController <FlipsideViewControllerDelegate> {	

//Objetos
	CanvasLevelData* data;
	AppStyles* varStyles;
	AppFormatsStyles* varFormats;
	UIImageView *background;
	
	UIDeviceOrientation currentOrientation;
	
	bool loadContent;
	
	NSInteger sizeTop;
	NSInteger sizeBottom;
	NSInteger sizeHeaderText;	
	
	UIButton *infoButton;
}

@property(nonatomic, retain) CanvasLevelData* data;
@property(nonatomic, retain) AppStyles* varStyles;
@property(nonatomic, retain) AppFormatsStyles* varFormats;
@property(nonatomic, retain) UIImageView *background;

@property(nonatomic) NSInteger sizeTop;
@property(nonatomic) NSInteger sizeBottom;
@property(nonatomic) NSInteger sizeHeaderText;

@property(nonatomic, retain) UIButton *infoButton;

//Metodos

	-(void) loadThemesComponents;
	-(void) loadThemes;

	-(void)showInfo:(id)sender;

	-(void) createInfoButton;


@end