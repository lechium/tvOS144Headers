/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>

@class NSSet, NSString, NSNumber, NSDate, NoteBodyObject, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>

@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSSet * noteCellKeyPaths; 
@property (nonatomic,readonly) BOOL hasUnreadChanges; 
@property (nonatomic,readonly) BOOL isDeletedOrInTrash; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) long long currentStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * externalFlags; 
@property (nonatomic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * externalSequenceNumber; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * contentType; 
@property (nonatomic,retain) NSNumber * containsCJK; 
@property (nonatomic,retain) NoteBodyObject * body; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,readonly) NSString * contentAsPlainTextPreservingNewlines; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,readonly) BOOL isBeingMarkedForDeletion; 
@property (nonatomic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,retain,readonly) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
-(unsigned long long)flags;
-(id)identifier;
-(NSString *)content;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)accountName;
-(void)setContent:(NSString *)arg1 ;
-(unsigned long long)searchResultType;
-(BOOL)isPinned;
-(BOOL)containsAttachments;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(id)contentIdentifier;
-(BOOL)isDeletable;
-(long long)currentStatus;
-(NSString *)contentAsPlainText;
-(NSString *)contentAsPlainTextPreservingNewlines;
-(void)markForDeletion;
-(BOOL)isMarkedForDeletion;
-(void)setIsPlainText:(BOOL)arg1 ;
-(long long)serverIntId;
-(id)folderName;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(BOOL)isMovable;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(NSSet *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)searchIndexingIdentifier;
-(BOOL)hasUnreadChanges;
-(BOOL)isDeletedOrInTrash;
-(id)defaultTitleForEmptyNote;
-(BOOL)isPlainText;
-(NSString *)externalContentRef;
-(void)setExternalContentRef:(NSString *)arg1 ;
-(BOOL)isBeingMarkedForDeletion;
-(NSURL *)noteId;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)hasValidServerIntId;
-(BOOL)belongsToCollection:(id)arg1 ;
@end
