/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntitiesFetchOperation.h>
#import <TVHomeSharingKit/TVHKMediaEntitiesNetworkFetching.h>

@class TVHKMediaServerIdentifier, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, TVHKMediaServerVersion, NSMutableSet, NSString, NSSet, TVHKMediaLibraryRequest, TVHKMediaEntityKind, TVHKMediaLibraryRequestOperation;

@interface TVHKSimpleMediaEntitiesFetchOperation : TVHKMediaEntitiesFetchOperation <TVHKMediaEntitiesNetworkFetching> {

	BOOL _requestSortAscendingArgument;
	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;
	unsigned long long _basePlaylistID;
	unsigned long long _databaseID;
	unsigned long long _currentServerRevision;
	TVHKMediaServerVersion* _serverVersion;
	NSMutableSet* _properties;
	NSString* _requestSortArgument;
	NSSet* _requestSortDMAPCodeNames;
	NSString* _requestQueryArgument;
	TVHKMediaLibraryRequest* _mediaServerRequest;
	TVHKMediaEntityKind* _mediaEntityKind;
	TVHKMediaLibraryRequestOperation* _mediaServerRequestOperation;

}

@property (nonatomic,retain) NSMutableSet * properties;                                                   //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * requestSortArgument;                                                //@synthesize requestSortArgument=_requestSortArgument - In the implementation block
@property (assign,nonatomic) BOOL requestSortAscendingArgument;                                           //@synthesize requestSortAscendingArgument=_requestSortAscendingArgument - In the implementation block
@property (nonatomic,copy) NSSet * requestSortDMAPCodeNames;                                              //@synthesize requestSortDMAPCodeNames=_requestSortDMAPCodeNames - In the implementation block
@property (nonatomic,copy) NSString * requestQueryArgument;                                               //@synthesize requestQueryArgument=_requestQueryArgument - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequest * mediaServerRequest;                                //@synthesize mediaServerRequest=_mediaServerRequest - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityKind * mediaEntityKind;                                       //@synthesize mediaEntityKind=_mediaEntityKind - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequestOperation * mediaServerRequestOperation;              //@synthesize mediaServerRequestOperation=_mediaServerRequestOperation - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaServerIdentifier * mediaServerIdentifier;                    //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaLibrarySessionState * sessionState;                          //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibraryRequestSession * requestSession;                           //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,copy) TVHKMediaServerVersion * serverVersion;                                        //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                               //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistID;                                           //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long currentServerRevision;                                    //@synthesize currentServerRevision=_currentServerRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_responseTypeFromEntityResponseType:(unsigned long long)arg1 ;
+(id)_indexBarItemsFromDMAPEntities:(id)arg1 ;
+(id)_booleanQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_dateQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 numberValue:(id)arg3 ;
+(id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 stringValue:(id)arg3 ;
-(void)cancel;
-(NSMutableSet *)properties;
-(void)setProperties:(NSMutableSet *)arg1 ;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(id)_initWithRequest:(id)arg1 ;
-(void)executionDidBegin;
-(TVHKMediaServerVersion *)serverVersion;
-(void)setServerVersion:(TVHKMediaServerVersion *)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 ;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(id)_mediaEntityKind;
-(id)_mediaLibraryRequest;
-(id)_mediaEntitiesFromDMAPEntities:(id)arg1 ;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(void)setMediaEntityKind:(TVHKMediaEntityKind *)arg1 ;
-(void)_processSortDescriptors;
-(void)_processPredicate;
-(void)_fetchMediaEntities;
-(TVHKMediaLibraryRequestOperation *)mediaServerRequestOperation;
-(void)setMediaServerRequest:(TVHKMediaLibraryRequest *)arg1 ;
-(NSString *)requestSortArgument;
-(BOOL)requestSortAscendingArgument;
-(id)_requestIndexArgument;
-(id)_requestMetatdaArgument;
-(NSString *)requestQueryArgument;
-(void)_handleMediaServerResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)setMediaServerRequestOperation:(TVHKMediaLibraryRequestOperation *)arg1 ;
-(id)_deletedEntityIdentifiersFromDeletedEntityNonPersistentIDs:(id)arg1 ;
-(TVHKMediaLibraryRequest *)mediaServerRequest;
-(TVHKMediaEntityKind *)mediaEntityKind;
-(id)_requestSortArgumentForSortDescriptors:(id)arg1 ascending:(BOOL*)arg2 ;
-(void)setRequestSortArgument:(NSString *)arg1 ;
-(void)setRequestSortAscendingArgument:(BOOL)arg1 ;
-(id)_DMAPCodeNamesForPropertyDescriptor:(id)arg1 ;
-(void)setRequestSortDMAPCodeNames:(NSSet *)arg1 ;
-(id)_queryTermForPredicate:(id)arg1 ;
-(void)setRequestQueryArgument:(NSString *)arg1 ;
-(id)_queryTermForCompoundPredicate:(id)arg1 ;
-(id)_queryTermForComparisonPredicate:(id)arg1 ;
-(NSSet *)requestSortDMAPCodeNames;
-(unsigned long long)basePlaylistID;
-(void)setBasePlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)currentServerRevision;
-(void)setCurrentServerRevision:(unsigned long long)arg1 ;
@end

