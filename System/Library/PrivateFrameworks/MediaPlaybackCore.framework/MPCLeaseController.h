/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFLeaseControlling.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;

@interface MPCLeaseController : NSObject <MFLeaseControlling> {

	MPCMediaFoundationTranslator* _translator;
	_MPCLeaseManager* _leaseManager;

}

@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) _MPCLeaseManager * leaseManager;                        //@synthesize leaseManager=_leaseManager - In the implementation block
-(MPCMediaFoundationTranslator *)translator;
-(_MPCLeaseManager *)leaseManager;
-(id)initWithTranslator:(id)arg1 leaseManager:(id)arg2 ;
-(void)requestLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relinquishLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

