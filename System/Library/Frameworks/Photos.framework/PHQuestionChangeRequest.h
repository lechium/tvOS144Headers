/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, NSDictionary, NSDate, PHObjectPlaceholder, NSManagedObjectID;

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (nonatomic,copy) NSString * entityIdentifier; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short entityType; 
@property (assign,nonatomic) unsigned short displayType; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy) NSDictionary * additionalInfo; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedQuestion; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8 ;
+(id)changeRequestForQuestion:(id)arg1 ;
+(void)deleteQuestions:(id)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(void)setState:(unsigned short)arg1 ;
-(NSDate *)creationDate;
-(double)score;
-(unsigned short)displayType;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setDisplayType:(unsigned short)arg1 ;
-(unsigned short)entityType;
-(void)setEntityType:(unsigned short)arg1 ;
-(NSString *)entityIdentifier;
-(void)setEntityIdentifier:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedQuestion;
@end

