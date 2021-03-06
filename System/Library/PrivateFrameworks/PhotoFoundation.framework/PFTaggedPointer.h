/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PFTaggedPointer : NSObject {

	SCD_Union_PF6 _payload;

}
+(unsigned short)tag;
+(id)newInstanceWithPayload:(unsigned long long)arg1 ;
+(BOOL)taggedPointersEnabled;
+(id)newInstanceWithSignedPayload:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)payload;
-(id)initWithPayload:(unsigned long long)arg1 ;
-(id)initWithSignedPayload:(long long)arg1 ;
-(long long)signedPayload;
-(BOOL)isTaggedPointer;
@end

