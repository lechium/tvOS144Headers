/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFLResumable, PFLDataSource;
@interface PFLSession : NSObject {

	id<PFLResumable> _underlyingTask;
	id<PFLDataSource> _dataSource;

}

@property (nonatomic,retain) id<PFLResumable> underlyingTask;              //@synthesize underlyingTask=_underlyingTask - In the implementation block
@property (nonatomic,retain) id<PFLDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedInstance;
+(id)sessionForTesting;
-(id)init;
-(BOOL)resume;
-(void)suspend;
-(id<PFLDataSource>)dataSource;
-(void)setDataSource:(id<PFLDataSource>)arg1 ;
-(id<PFLResumable>)underlyingTask;
-(void)setUnderlyingTask:(id<PFLResumable>)arg1 ;
-(BOOL)registerWithSource:(id)arg1 ;
-(void)updateModel:(id)arg1 modelConfiguration:(id)arg2 layerNamesToPrivatize:(id)arg3 privatizationIdentifier:(id)arg4 privatizationNormMax:(double)arg5 privatizationNormBinCount:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

