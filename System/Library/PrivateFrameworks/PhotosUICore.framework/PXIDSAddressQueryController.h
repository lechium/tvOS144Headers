/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSMutableArray, IDSBatchIDQueryController, NSString;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {

	NSMutableDictionary* _queryStateForAddress;
	NSMutableArray* _queries;
	IDSBatchIDQueryController* _idsBatchIDQueryController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)performBatchQueryForAddresses:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
@end

