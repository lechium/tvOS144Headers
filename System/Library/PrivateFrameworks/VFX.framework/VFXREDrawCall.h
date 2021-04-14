/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VFXREDrawCall : NSObject {

	 drawCall;
	 material;
	 aabb;

}
-(id)init;
-(unsigned long long)primitiveType;
-(long long)vertexCount;
-(long long)instanceCount;
-(unsigned long long)materialIdentifier;
-(void)enumerateBuffers:(/*^block*/id)arg1 ;
-(void)enumerateTextures:(/*^block*/id)arg1 ;
-(1)boundingBoxMin;
-(1)boundingBoxMax;
@end
