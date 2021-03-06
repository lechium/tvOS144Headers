/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MAXpcManager : NSObject
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2 ;
-(id)sendSync:(id)arg1 ;
-(void)sendAsync:(id)arg1 clientHandler:(/*^block*/id)arg2 taskDescriptor:(id)arg3 ;
-(void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)setClientName:(id)arg1 ;
-(void)setClientConnectionHandler;
-(void)ensureConnection;
-(void)clearConnection:(id)arg1 ;
@end

