/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@class AXMScreenGrabber;

@interface AXMScreenCaptureNode : AXMSourceNode {

	AXMScreenGrabber* _screenGrabber;

}

@property (nonatomic,retain) AXMScreenGrabber * screenGrabber;              //@synthesize screenGrabber=_screenGrabber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(AXMScreenGrabber *)screenGrabber;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithScreenCaptureRegion:(CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)setScreenGrabber:(AXMScreenGrabber *)arg1 ;
@end

