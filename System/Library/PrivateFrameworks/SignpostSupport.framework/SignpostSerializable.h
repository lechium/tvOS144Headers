/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SignpostSerializable <NSObject>
@required
+(id)serializationTypeNumber;
-(id)initWithDictionary:(id)arg1;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg1;
-(id)humanReadableType;
-(id)humanReadableDictionaryRepresentation;

@end

