/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOComposedRouteTransitSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE87 fromNodeID; 
@property (nonatomic,readonly) SCD_Struct_GE87 toNodeID; 
@property (nonatomic,readonly) unsigned long long lineID; 
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance; 
@required
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE87)fromNodeID;
-(SCD_Struct_GE87)toNodeID;
-(int)toNodeSignificance;

@end

