/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _managedObjectReferenceURI;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURI:(id)arg1 ;
-(id)URI;
@end

