/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFLTaskStateProvider <NSObject>
@optional
-(id)metricsProvider;
-(int)modelVersion;
-(id)resourceManager;
-(id)metricsIdentifier;
-(id)validationProvider;
-(id)uploadResultsIdentifier;

@required
-(id)taskIdentifier;
-(id)layerNames;
-(id)modelIdentifier;
-(id)dataProvider;
-(id)modelConfiguration;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;

@end
