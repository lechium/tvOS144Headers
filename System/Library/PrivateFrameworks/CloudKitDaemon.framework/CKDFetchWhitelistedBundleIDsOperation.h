/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                           //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
-(void)main;
-(int)operationType;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end

