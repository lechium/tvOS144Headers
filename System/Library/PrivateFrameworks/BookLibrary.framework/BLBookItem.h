/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSDate;

@interface BLBookItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _sample;
	BOOL _iTunesU;
	NSString* _temporaryIdentifier;
	NSString* _legacyUniqueIdentifier;
	NSString* _storeIdentifier;
	NSString* _persistentIdentifier;
	NSString* _publisherIdentifier;
	NSString* _title;
	NSString* _author;
	NSString* _feedURL;
	NSURL* _fileURL;
	NSURL* _permlink;
	long long _type;
	NSString* _publicationVersion;
	NSString* _album;
	NSString* _folderName;
	NSDictionary* _entry;
	NSString* _identifier;
	long long _purgePriority;
	NSDate* _lastUserAccessDate;
	NSString* _itunesuAssetID;
	NSString* _coverImagePath;

}

@property (nonatomic,retain) NSDictionary * entry;                         //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * temporaryIdentifier;                 //@synthesize temporaryIdentifier=_temporaryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * legacyUniqueIdentifier;              //@synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * publisherIdentifier;                 //@synthesize publisherIdentifier=_publisherIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * feedURL;                             //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSURL * permlink;                             //@synthesize permlink=_permlink - In the implementation block
@property (assign,nonatomic) BOOL iTunesU;                                 //@synthesize iTunesU=_iTunesU - In the implementation block
@property (assign,getter=isSample,nonatomic) BOOL sample;                  //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * publicationVersion;                  //@synthesize publicationVersion=_publicationVersion - In the implementation block
@property (nonatomic,copy) NSString * album;                               //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * folderName;                          //@synthesize folderName=_folderName - In the implementation block
@property (assign,nonatomic) long long purgePriority;                      //@synthesize purgePriority=_purgePriority - In the implementation block
@property (nonatomic,retain) NSDate * lastUserAccessDate;                  //@synthesize lastUserAccessDate=_lastUserAccessDate - In the implementation block
@property (nonatomic,copy) NSString * itunesuAssetID;                      //@synthesize itunesuAssetID=_itunesuAssetID - In the implementation block
@property (nonatomic,copy) NSString * coverImagePath;                      //@synthesize coverImagePath=_coverImagePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) NSString * path; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(NSURL *)fileURL;
-(NSString *)path;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)persistentIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)author;
-(NSString *)storeIdentifier;
-(void)setAuthor:(NSString *)arg1 ;
-(NSDictionary *)entry;
-(void)setEntry:(NSDictionary *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setSample:(BOOL)arg1 ;
-(NSString *)mimeType;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)publicationVersion;
-(BOOL)isSample;
-(void)setPublicationVersion:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)legacyUniqueIdentifier;
-(void)setLegacyUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)feedURL;
-(NSString *)folderName;
-(void)setFolderName:(NSString *)arg1 ;
-(id)initWithEntry:(id)arg1 basePath:(id)arg2 ;
-(NSURL *)permlink;
-(void)setLastUserAccessDate:(NSDate *)arg1 ;
-(id)initWithEduCloudData:(id)arg1 path:(id)arg2 ;
-(void)_setCloudCoverImageData:(id)arg1 ;
-(id)_cloudDictionaryRepresentation;
-(void)setPermlink:(NSURL *)arg1 ;
-(void)setTemporaryIdentifier:(NSString *)arg1 ;
-(void)setPublisherIdentifier:(NSString *)arg1 ;
-(void)setITunesU:(BOOL)arg1 ;
-(void)setFeedURL:(NSString *)arg1 ;
-(void)setItunesuAssetID:(NSString *)arg1 ;
-(void)setCoverImagePath:(NSString *)arg1 ;
-(NSString *)temporaryIdentifier;
-(NSString *)publisherIdentifier;
-(BOOL)iTunesU;
-(long long)purgePriority;
-(void)setPurgePriority:(long long)arg1 ;
-(NSDate *)lastUserAccessDate;
-(NSString *)itunesuAssetID;
-(NSString *)coverImagePath;
-(id)initWithPeristentIdentifier:(id)arg1 permlink:(id)arg2 title:(id)arg3 ;
-(id)_cloudCoverImageData;
-(void)_setFileURL:(id)arg1 ;
@end

