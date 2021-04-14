/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSLocking.h>

@class ML3DatabaseConnection, NSLock, MSVXPCTransaction, ML3MusicLibrary, NSUUID, ML3Client;

@interface ML3ActiveTransaction : NSObject <NSLocking> {

	ML3DatabaseConnection* _connection;
	NSLock* _lock;
	MSVXPCTransaction* _xpcTransaction;
	BOOL _terminable;
	BOOL _inUseByOperation;
	BOOL _readOnly;
	ML3MusicLibrary* _library;
	NSUUID* _identifier;
	ML3Client* _client;
	double _lastUsedTime;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection; 
@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) ML3Client * client;                              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                               //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) BOOL terminable;                                   //@synthesize terminable=_terminable - In the implementation block
@property (assign,nonatomic) BOOL inUseByOperation;                             //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                   //@synthesize readOnly=_readOnly - In the implementation block
-(id)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(NSUUID *)identifier;
-(ML3Client *)client;
-(ML3DatabaseConnection *)connection;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)arg1 ;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3 ;
-(void)updateLastUsed;
-(id)_relinquishConnection;
-(double)lastUsedTime;
-(void)setLastUsedTime:(double)arg1 ;
-(BOOL)terminable;
-(void)setTerminable:(BOOL)arg1 ;
-(BOOL)inUseByOperation;
-(void)setInUseByOperation:(BOOL)arg1 ;
@end

