/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInference.framework/SiriInference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriInference.ContactRankerOutput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 provider;
	 $__lazy_storage_$_outputScore;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

