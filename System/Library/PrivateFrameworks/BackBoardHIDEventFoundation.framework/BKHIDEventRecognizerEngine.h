/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@class NSMutableArray, NSString;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {

	os_unfair_lock_s _lock;
	NSMutableArray* _recognizers;
	NSMutableArray* _blocks;

}

@property (nonatomic,retain) NSMutableArray * recognizers;              //@synthesize recognizers=_recognizers - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocks;                   //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)blocks;
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(void)addRecognizer:(id)arg1 recognitionBlock:(/*^block*/id)arg2 ;
-(void)removeRecognizer:(id)arg1 ;
-(NSMutableArray *)recognizers;
-(void)setRecognizers:(NSMutableArray *)arg1 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
@end

