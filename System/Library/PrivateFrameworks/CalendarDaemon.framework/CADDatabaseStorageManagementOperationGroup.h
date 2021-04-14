/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDatabaseStorageManagementInterface.h>

@class NSString;

@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup <CADDatabaseStorageManagementInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(BOOL)storageManagementAccessGranted;
-(unsigned long long)sizeCalendarDirectory;
-(unsigned long long)sizeAttachments;
-(unsigned long long)sizeDirectoryAtPath:(id)arg1 ;
-(void)CADDatabaseGetStorageUsage:(/*^block*/id)arg1 ;
@end

