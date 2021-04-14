/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsEmptyState, ARUIRingsCountdownState, ARUIRingsAlphaReductionState;

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {

	ARUIRingsEmptyState* _emptyState;
	ARUIRingsCountdownState* _countdownState;
	ARUIRingsAlphaReductionState* _alphaReductionState;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(id)pipelineForConfiguration:(id)arg1 ;
@end
