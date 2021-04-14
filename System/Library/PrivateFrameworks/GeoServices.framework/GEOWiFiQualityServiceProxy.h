/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOWiFiQualityServiceProxy <NSObject>
@required
-(void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5;
-(void)cancelRequestId:(id)arg1;
-(void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6;

@end

