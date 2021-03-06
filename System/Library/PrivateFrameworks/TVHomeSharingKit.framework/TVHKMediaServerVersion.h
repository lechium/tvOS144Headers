/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVHKMediaServerVersion : NSObject <NSCopying> {

	unsigned _sharingProtocolVersion;
	unsigned _DAAPProtocolVersion;
	unsigned _DPAPProtocolVersion;
	unsigned _clientSharingProtocolVersion;
	NSString* _serverApplicationName;
	unsigned long long _serverApplicationVersion;
	unsigned long long _supportedExtensions;

}

@property (nonatomic,copy) NSString * serverApplicationName;                                  //@synthesize serverApplicationName=_serverApplicationName - In the implementation block
@property (assign,nonatomic) unsigned long long serverApplicationVersion;                     //@synthesize serverApplicationVersion=_serverApplicationVersion - In the implementation block
@property (assign,nonatomic) unsigned sharingProtocolVersion;                                 //@synthesize sharingProtocolVersion=_sharingProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned DAAPProtocolVersion;                                    //@synthesize DAAPProtocolVersion=_DAAPProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned DPAPProtocolVersion;                                    //@synthesize DPAPProtocolVersion=_DPAPProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned clientSharingProtocolVersion;                           //@synthesize clientSharingProtocolVersion=_clientSharingProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long supportedExtensions;                          //@synthesize supportedExtensions=_supportedExtensions - In the implementation block
@property (nonatomic,readonly) unsigned short sharingProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short sharingProtocolMinorVersion; 
@property (nonatomic,readonly) unsigned short DAAPProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short DAAPProtocolMinorVersion; 
@property (nonatomic,readonly) unsigned short DPAPProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short DPAPProtocolMinorVersion; 
@property (nonatomic,readonly) unsigned short clientSharingProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short clientSharingProtocolMinorVersion; 
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)_init;
-(BOOL)supportsCapability:(unsigned long long)arg1 ;
-(BOOL)supportsSharingProtocolVersion:(unsigned)arg1 ;
-(unsigned)clientSharingProtocolVersion;
-(void)setClientSharingProtocolVersion:(unsigned)arg1 ;
-(NSString *)serverApplicationName;
-(void)setServerApplicationName:(NSString *)arg1 ;
-(unsigned long long)serverApplicationVersion;
-(void)setServerApplicationVersion:(unsigned long long)arg1 ;
-(unsigned)DAAPProtocolVersion;
-(void)setDAAPProtocolVersion:(unsigned)arg1 ;
-(unsigned)DPAPProtocolVersion;
-(void)setDPAPProtocolVersion:(unsigned)arg1 ;
-(unsigned)sharingProtocolVersion;
-(void)setSharingProtocolVersion:(unsigned)arg1 ;
-(unsigned long long)supportedExtensions;
-(void)setSupportedExtensions:(unsigned long long)arg1 ;
-(BOOL)supportsSharingProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2 ;
-(void)_updateClientSharingProtocolVersion;
-(BOOL)_supportsHomeVideos;
-(BOOL)supportsDAAPProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2 ;
-(unsigned short)DAAPProtocolMajorVersion;
-(unsigned short)DAAPProtocolMinorVersion;
-(BOOL)supportsDPAPProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2 ;
-(unsigned short)DPAPProtocolMajorVersion;
-(unsigned short)DPAPProtocolMinorVersion;
-(unsigned short)sharingProtocolMajorVersion;
-(unsigned short)sharingProtocolMinorVersion;
-(unsigned short)clientSharingProtocolMajorVersion;
-(unsigned short)clientSharingProtocolMinorVersion;
-(BOOL)supportsDAAPProtocolVersion:(unsigned)arg1 ;
-(BOOL)supportsDPAPProtocolVersion:(unsigned)arg1 ;
@end

