/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libANGLE-shared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libANGLE-shared.dylib/libANGLE-shared.dylib-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@class EAGLContext;

@interface WebSwapLayerEAGL : CAEAGLLayer {

	EAGLContext* mDisplayContext;
	BOOL initialized;
	SharedSwapState* mSwapState;
	const FunctionsGL* mFunctions;
	unsigned mReadFramebuffer;

}
-(void)display;
-(id)initWithSharedState:(SharedSwapState*)arg1 withContext:(id)arg2 withFunctions:(const FunctionsGL*)arg3 ;
@end

