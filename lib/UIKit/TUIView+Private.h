/*
 Copyright 2011 Twitter, Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this work except in compliance with the License.
 You may obtain a copy of the License in the LICENSE file, or at:
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "TUIView.h"
#import "TUITextRenderer.h"

@interface TUIView ()
/*
 * Whether we're inside the -actionForLayer:forKey: method.
 *
 * This is used so we can get the original action for the key, and wrap it with
 * extra functionality, without entering an infinite loop. 
 */
@property (nonatomic, assign, getter = isRecursingActionForLayer) BOOL recursingActionForLayer;

@property (nonatomic, retain) NSArray *textRenderers;

- (TUITextRenderer *)textRendererAtPoint:(CGPoint)point;
- (void)_updateLayerScaleFactor;

@end

extern CGFloat TUICurrentContextScaleFactor(void);
