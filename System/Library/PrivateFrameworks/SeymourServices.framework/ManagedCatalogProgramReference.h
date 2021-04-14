/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface ManagedCatalogProgramReference : NSManagedObject

@property (copy,nonatomic) NSString * contentRating; 
@property (copy,nonatomic) NSString * dateReleased; 
@property (copy,nonatomic) NSString * identifier; 
@property (retain,nonatomic) NSSet * contributorIdentifiers; 
@property (retain,nonatomic) NSSet * equipmentIdentifiers; 
@property (retain,nonatomic) NSSet * modalityIdentifiers; 
@property (retain,nonatomic) NSSet * musicGenreIdentifiers; 
@property (retain,nonatomic) NSSet * trainerIdentifiers; 
@property (retain,nonatomic) NSSet * workoutIdentifiers; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
