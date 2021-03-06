/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObjectNSCopying;
@class VNRequest;

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject {

	VNRequest* _request;
	id<NSObject><NSCopying> _observationsCacheKey;

}

@property (nonatomic,readonly) VNRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying> observationsCacheKey;              //@synthesize observationsCacheKey=_observationsCacheKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(VNRequest *)request;
-(id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2 ;
-(id<NSObject><NSCopying>)observationsCacheKey;
@end

