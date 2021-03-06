/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightIndexer.h>

@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4 ;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(BOOL)arg4 ;
+(id)copyAttachmentsForMessageID:(long long)arg1 ;
+(id)attachmentRecordsFromAttachments:(id)arg1 ;
+(id)copyPathFromAttachment:(IMDAttachmentRecordStructRef)arg1 ;
+(id)attachmentIndexTypeForPath:(id)arg1 filename:(id)arg2 attachmentRecord:(IMDAttachmentRecordStructRef)arg3 ;
+(id)copyGUIDFromAttachment:(IMDAttachmentRecordStructRef)arg1 ;
+(unsigned long long)partKeyForAttachmentFromItem:(id)arg1 withGUID:(id)arg2 ;
+(BOOL)_attachmentIsSticker:(IMDAttachmentRecordStructRef)arg1 ;
@end

