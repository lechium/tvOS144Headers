/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUMessageable
@required
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)deregisterEventID:(id)arg1;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deregisterRequestID:(id)arg1;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;

@end

