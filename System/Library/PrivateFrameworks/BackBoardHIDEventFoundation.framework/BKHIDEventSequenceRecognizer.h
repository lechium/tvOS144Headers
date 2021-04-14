/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventRecognizer.h>

@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer> {

	long long _descriptorIndex;
	BOOL _shouldConsumeEvents;
	NSArray* _descriptors;

}

@property (assign,nonatomic) BOOL shouldConsumeEvents;              //@synthesize shouldConsumeEvents=_shouldConsumeEvents - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;               //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognizerForEventDescriptor:(id)arg1 ;
+(id)recognizerForEventDescriptors:(id)arg1 ;
-(NSArray *)descriptors;
-(long long)processEvent:(IOHIDEventRef)arg1 shouldConsume:(BOOL*)arg2 ;
-(BOOL)shouldConsumeEvents;
-(void)setShouldConsumeEvents:(BOOL)arg1 ;
@end

