/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoFrameSelectorDelegate.h>

@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate> {

	/*^block*/id _frameSelectorDidSelectFrame;

}

@property (copy) id frameSelectorDidSelectFrame;              //@synthesize frameSelectorDidSelectFrame=_frameSelectorDidSelectFrame - In the implementation block
-(void)frameSelector:(id)arg1 didSelectFrame:(opaqueCMSampleBufferRef)arg2 detections:(id)arg3 ;
-(id)frameSelectorDidSelectFrame;
-(void)setFrameSelectorDidSelectFrame:(id)arg1 ;
@end

