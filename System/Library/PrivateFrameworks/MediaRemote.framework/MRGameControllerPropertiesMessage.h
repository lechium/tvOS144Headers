/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRGameControllerPropertiesProtobuf * properties; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(_MRGameControllerPropertiesProtobuf *)properties;
-(unsigned long long)controllerID;
-(id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2 ;
@end

