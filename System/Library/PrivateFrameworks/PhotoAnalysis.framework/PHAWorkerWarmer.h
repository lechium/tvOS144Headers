/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, PHAWorker, PHAJobConstraints;

@interface PHAWorkerWarmer : NSObject {

	NSMutableSet* _workers;
	PHAWorker* _lastActiveWorker;
	PHAJobConstraints* _lastConstraints;

}

@property (nonatomic,readonly) NSMutableSet * workers;                         //@synthesize workers=_workers - In the implementation block
@property (nonatomic,retain) PHAWorker * lastActiveWorker;                     //@synthesize lastActiveWorker=_lastActiveWorker - In the implementation block
@property (nonatomic,retain) PHAJobConstraints * lastConstraints;              //@synthesize lastConstraints=_lastConstraints - In the implementation block
+(unsigned long long)stateCode;
-(id)init;
-(void)setActiveWorker:(id)arg1 withJob:(id)arg2 ;
-(id)statusAsDictionary;
-(void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
-(BOOL)_cooldownWorkerIfWarmed:(id)arg1 ;
-(void)recordConstraintChange:(id)arg1 ;
-(void)reportNoMoreJobsExpected;
-(NSMutableSet *)workers;
-(PHAWorker *)lastActiveWorker;
-(void)setLastActiveWorker:(PHAWorker *)arg1 ;
-(PHAJobConstraints *)lastConstraints;
-(void)setLastConstraints:(PHAJobConstraints *)arg1 ;
@end

