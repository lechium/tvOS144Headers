/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL, NSArray;

@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;
	NSArray* _validationIndicies;
	NSArray* _trainingIndicies;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;                  //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
@property (nonatomic,readonly) NSArray * validationIndicies;              //@synthesize validationIndicies=_validationIndicies - In the implementation block
@property (nonatomic,readonly) NSArray * trainingIndicies;                //@synthesize trainingIndicies=_trainingIndicies - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(id)initWithCompiledModelURL:(id)arg1 validationDataIndicies:(id)arg2 trainingDataIndicies:(id)arg3 ;
-(NSArray *)validationIndicies;
-(NSArray *)trainingIndicies;
@end

