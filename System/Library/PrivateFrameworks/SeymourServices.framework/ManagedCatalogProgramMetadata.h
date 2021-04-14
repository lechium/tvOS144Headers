/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, ManagedCatalogPreview;

@interface ManagedCatalogProgramMetadata : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * location; 
@property (copy,nonatomic) NSString * previewStreamingURL; 
@property (copy,nonatomic) NSString * sharingURL; 
@property (copy,nonatomic) NSString * summary; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) NSSet * accessibilityFeatures; 
@property (retain,nonatomic) NSSet * artwork; 
@property (retain,nonatomic) NSSet * contributors; 
@property (retain,nonatomic) ManagedCatalogPreview * preview; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

