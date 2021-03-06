/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation {

	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;              //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
-(void)main;
-(int)operationType;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
@end

