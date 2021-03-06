/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class AFPeerInfo, AFAudioSessionCoordinationSystemInfo, NSString;

@interface AFAudioSessionCoordinationDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	AFPeerInfo* _peerInfo;
	AFAudioSessionCoordinationSystemInfo* _systemInfo;

}

@property (nonatomic,copy,readonly) AFPeerInfo * peerInfo;                                          //@synthesize peerInfo=_peerInfo - In the implementation block
@property (nonatomic,copy,readonly) AFAudioSessionCoordinationSystemInfo * systemInfo;              //@synthesize systemInfo=_systemInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(AFPeerInfo *)peerInfo;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)buildDictionaryRepresentation;
-(AFAudioSessionCoordinationSystemInfo *)systemInfo;
-(id)initWithPeerInfo:(id)arg1 systemInfo:(id)arg2 ;
@end

