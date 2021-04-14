/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKFollowUpItemFactory, AKFollowUpProvider;
@interface AKBaseFollowupManager : NSObject {

	id<AKFollowUpItemFactory> _factory;
	id<AKFollowUpProvider> _provider;

}
-(void)teardownFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_alignedInsertionCandidates:(id)arg1 withExistingItems:(id)arg2 ;
-(id)initWithFollowUpFactory:(id)arg1 provider:(id)arg2 ;
-(BOOL)synchronizeFollowUpsWithServerPayload:(id)arg1 altDSID:(id)arg2 error:(id*)arg3 ;
@end

