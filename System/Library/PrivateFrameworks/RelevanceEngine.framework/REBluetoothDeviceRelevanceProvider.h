/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (nonatomic,readonly) BOOL connectedToCar;                  //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (nonatomic,readonly) BOOL connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(BOOL)connectedToCar;
-(id)dictionaryEncoding;
-(BOOL)connectedToSpeaker;
-(id)initWithConnectionToCar:(BOOL)arg1 connectionToSpeaker:(BOOL)arg2 ;
@end

