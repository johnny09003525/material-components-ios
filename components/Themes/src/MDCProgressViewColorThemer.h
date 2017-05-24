/*
 Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <UIKit/UIKit.h>

#import "MDCColorScheming.h"
#import "MaterialProgressView.h"

/**
 Used to apply a color scheme to theme MDCProgressView.
 */
@interface MDCProgressViewColorThemer : NSObject

/**
 Applies a color scheme to theme a MDCProgressView. Use a UIAppearance proxy to apply a color scheme
 to all instances of MDCProgressView.

 @param colorScheme The color scheme to apply to MDCProgressView.
 @param progressView A MDCProgressView instance to apply a color scheme.
 */
+ (void)applyColorScheme:(NSObject<MDCColorScheming> *)colorScheme
          toProgressView:(MDCProgressView *)progressView;

@end
