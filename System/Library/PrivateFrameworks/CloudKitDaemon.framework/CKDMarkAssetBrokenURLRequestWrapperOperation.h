/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation {

	CKDMarkAssetBrokenURLRequest* _urlRequest;

}

@property (nonatomic,retain) CKDMarkAssetBrokenURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(void)main;
-(int)operationType;
-(id)activityCreate;
-(CKDMarkAssetBrokenURLRequest *)urlRequest;
-(void)setUrlRequest:(CKDMarkAssetBrokenURLRequest *)arg1 ;
-(BOOL)shouldCheckAppVersion;
@end

