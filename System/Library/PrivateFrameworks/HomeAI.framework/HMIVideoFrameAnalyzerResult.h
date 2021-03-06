/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent> {

	HMIVideoFrame* _frame;
	NSSet* _events;

}

@property (readonly) HMIVideoFrame * frame;                         //@synthesize frame=_frame - In the implementation block
@property (readonly) NSSet * events;                                //@synthesize events=_events - In the implementation block
@property (readonly) SCD_Struct_HM3 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)description;
-(SCD_Struct_HM3)time;
-(HMIVideoFrame *)frame;
-(NSSet *)events;
-(id)initWithFrame:(id)arg1 events:(id)arg2 ;
@end

