/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TVHKMediaServerVersion, TVHKFairPlaySAPContext;

@interface TVHKMediaLibrarySessionState : NSObject <NSCopying> {

	BOOL _importingDPAPDatabase;
	unsigned _sessionID;
	unsigned _DAAPDatabaseID;
	unsigned _DAAPRevision;
	unsigned _DAAPBasePlaylistID;
	unsigned _DPAPDatabaseID;
	unsigned _DPAPRevision;
	unsigned _DPAPBasePlaylistID;
	unsigned _DRMRevision;
	unsigned long long _accessMode;
	NSString* _homeSharingGroupIdentifier;
	TVHKMediaServerVersion* _serverVersion;
	NSString* _DAAPDatabaseName;
	unsigned long long _DAAPDatabasePersistentID;
	unsigned long long _DAAPBasePlaylistPersistentID;
	unsigned long long _DPAPDatabasePersistentID;
	unsigned long long _DPAPBasePlaylistPersistentID;
	TVHKFairPlaySAPContext* _fairPlaySAPContext;

}

@property (nonatomic,readonly) unsigned long long accessMode;                                        //@synthesize accessMode=_accessMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupIdentifier;                           //@synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier - In the implementation block
@property (nonatomic,copy) TVHKMediaServerVersion * serverVersion;                                   //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * DAAPDatabaseName;                                              //@synthesize DAAPDatabaseName=_DAAPDatabaseName - In the implementation block
@property (assign,nonatomic) unsigned DAAPDatabaseID;                                                //@synthesize DAAPDatabaseID=_DAAPDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long DAAPDatabasePersistentID;                            //@synthesize DAAPDatabasePersistentID=_DAAPDatabasePersistentID - In the implementation block
@property (assign,nonatomic) unsigned DAAPRevision;                                                  //@synthesize DAAPRevision=_DAAPRevision - In the implementation block
@property (assign,nonatomic) unsigned DAAPBasePlaylistID;                                            //@synthesize DAAPBasePlaylistID=_DAAPBasePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long DAAPBasePlaylistPersistentID;                        //@synthesize DAAPBasePlaylistPersistentID=_DAAPBasePlaylistPersistentID - In the implementation block
@property (assign,nonatomic) unsigned DPAPDatabaseID;                                                //@synthesize DPAPDatabaseID=_DPAPDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long DPAPDatabasePersistentID;                            //@synthesize DPAPDatabasePersistentID=_DPAPDatabasePersistentID - In the implementation block
@property (assign,nonatomic) unsigned DPAPRevision;                                                  //@synthesize DPAPRevision=_DPAPRevision - In the implementation block
@property (assign,nonatomic) unsigned DPAPBasePlaylistID;                                            //@synthesize DPAPBasePlaylistID=_DPAPBasePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long DPAPBasePlaylistPersistentID;                        //@synthesize DPAPBasePlaylistPersistentID=_DPAPBasePlaylistPersistentID - In the implementation block
@property (assign,getter=isImportingDPAPDatabase,nonatomic) BOOL importingDPAPDatabase;              //@synthesize importingDPAPDatabase=_importingDPAPDatabase - In the implementation block
@property (nonatomic,readonly) unsigned long long photoLibraryState; 
@property (assign,nonatomic) unsigned DRMRevision;                                                   //@synthesize DRMRevision=_DRMRevision - In the implementation block
@property (nonatomic,retain) TVHKFairPlaySAPContext * fairPlaySAPContext;                            //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(TVHKMediaServerVersion *)serverVersion;
-(void)setServerVersion:(TVHKMediaServerVersion *)arg1 ;
-(unsigned)DAAPDatabaseID;
-(unsigned)DPAPDatabaseID;
-(NSString *)homeSharingGroupIdentifier;
-(TVHKFairPlaySAPContext *)fairPlaySAPContext;
-(unsigned long long)accessMode;
-(unsigned)DAAPBasePlaylistID;
-(unsigned)DAAPRevision;
-(unsigned)DPAPRevision;
-(unsigned long long)photoLibraryState;
-(unsigned)DPAPBasePlaylistID;
-(void)setDPAPDatabaseID:(unsigned)arg1 ;
-(void)setDPAPDatabasePersistentID:(unsigned long long)arg1 ;
-(unsigned long long)DPAPDatabasePersistentID;
-(void)setFairPlaySAPContext:(TVHKFairPlaySAPContext *)arg1 ;
-(unsigned)DRMRevision;
-(id)initWithAccessMode:(unsigned long long)arg1 homeSharingGroupIdentifier:(id)arg2 ;
-(void)setDAAPDatabaseID:(unsigned)arg1 ;
-(void)setDAAPDatabasePersistentID:(unsigned long long)arg1 ;
-(void)setDAAPDatabaseName:(NSString *)arg1 ;
-(void)setDAAPBasePlaylistID:(unsigned)arg1 ;
-(void)setDAAPBasePlaylistPersistentID:(unsigned long long)arg1 ;
-(void)setDAAPRevision:(unsigned)arg1 ;
-(void)setImportingDPAPDatabase:(BOOL)arg1 ;
-(void)setDPAPBasePlaylistID:(unsigned)arg1 ;
-(void)setDPAPBasePlaylistPersistentID:(unsigned long long)arg1 ;
-(void)setDPAPRevision:(unsigned)arg1 ;
-(void)setDRMRevision:(unsigned)arg1 ;
-(unsigned long long)DAAPDatabasePersistentID;
-(BOOL)isImportingDPAPDatabase;
-(unsigned long long)DAAPBasePlaylistPersistentID;
-(unsigned long long)DPAPBasePlaylistPersistentID;
-(NSString *)DAAPDatabaseName;
@end
