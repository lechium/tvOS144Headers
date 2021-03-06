/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFCloudKitOrdering.h>

@class NSString, NSOrderedSet, CKRecordID, NSData, NSArray;

@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering> {

	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	NSArray* _orderedWorkflowIDsArray;
	NSArray* _orderedFolderIDsArray;

}

@property (nonatomic,readonly) NSArray * orderedWorkflowIDsArray;              //@synthesize orderedWorkflowIDsArray=_orderedWorkflowIDsArray - In the implementation block
@property (nonatomic,readonly) NSArray * orderedFolderIDsArray;                //@synthesize orderedFolderIDsArray=_orderedFolderIDsArray - In the implementation block
@property (nonatomic,readonly) NSString * collectionIdentifier; 
@property (nonatomic,readonly) NSOrderedSet * orderedWorkflowIDs; 
@property (nonatomic,readonly) NSOrderedSet * orderedFolderIDs; 
@property (nonatomic,readonly) CKRecordID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;                    //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
+(id)collectionIdentifierForRecordID:(id)arg1 ;
+(id)recordBasename;
-(CKRecordID *)identifier;
-(NSString *)collectionIdentifier;
-(NSData *)recordSystemFieldsData;
-(NSOrderedSet *)orderedWorkflowIDs;
-(NSOrderedSet *)orderedFolderIDs;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 orderedWorkflowIDs:(id)arg2 orderedFolderIDs:(id)arg3 ;
-(NSArray *)orderedWorkflowIDsArray;
-(NSArray *)orderedFolderIDsArray;
@end

