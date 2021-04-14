/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, MLModelConfiguration;

@interface PFLUpdateConfiguration : NSObject {

	NSString* _identifier;
	NSArray* _layerNames;
	double _normMax;
	unsigned long long _normBinCount;
	MLModelConfiguration* _modelConfiguration;

}

@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * layerNames;                                   //@synthesize layerNames=_layerNames - In the implementation block
@property (nonatomic,readonly) double normMax;                                         //@synthesize normMax=_normMax - In the implementation block
@property (nonatomic,readonly) unsigned long long normBinCount;                        //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
-(NSString *)identifier;
-(NSArray *)layerNames;
-(MLModelConfiguration *)modelConfiguration;
-(unsigned long long)normBinCount;
-(id)initWithIdentifier:(id)arg1 layerNames:(id)arg2 normMax:(double)arg3 normBinCount:(unsigned long long)arg4 modelConfiguration:(id)arg5 ;
-(double)normMax;
@end

