/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate;

@interface MBContainer : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSString * containerTypeString; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (nonatomic,readonly) BOOL isSystemContainer; 
@property (nonatomic,readonly) BOOL isSystemSharedContainer; 
@property (getter=isSafeHarbor,nonatomic,readonly) BOOL safeHarbor; 
+(id)containerWithPropertyList:(id)arg1 ;
+(id)containerWithDomainName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)domain;
-(id)initWithPropertyList:(id)arg1 ;
-(NSString *)identifier;
-(int)containerType;
-(BOOL)isSystemContainer;
-(BOOL)isSystemSharedContainer;
-(id)propertyListForBackupProperties;
-(NSString *)containerDir;
-(BOOL)isSafeHarbor;
-(NSDate *)datePlacedInSafeHarbor;
-(NSString *)safeHarborDir;
-(NSString *)containerTypeString;
-(void)setContainerDir:(NSString *)arg1 ;
-(void)setDatePlacedInSafeHarbor:(NSDate *)arg1 ;
-(id)propertyListForSafeHarborInfo;
@end

