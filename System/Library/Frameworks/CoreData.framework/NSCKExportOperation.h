/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportMetadata, NSSet;

@interface NSCKExportOperation : NSManagedObject

@property (nonatomic,retain) NSNumber * statusNum; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSCKExportMetadata * exportMetadata; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,retain) NSSet * objects; 
+(id)entityPath;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end

