/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TVHKDMAPEntityKind, NSDictionary, TVHKMediaEntityPropertyDescriptorCollection;

@interface TVHKMediaEntityKind : NSObject <NSCopying> {

	NSString* _entityClassName;
	TVHKDMAPEntityKind* _DAMPEntityKind;
	NSString* _DMAPShuffleSortArgumentValue;
	NSDictionary* _ascendingDMAPSortArgumentValues;
	NSDictionary* _descendingDMAPSortArgumentValues;
	TVHKMediaEntityPropertyDescriptorCollection* _propertyDescriptorCollecton;

}

@property (nonatomic,copy) NSString * entityClassName;                                                               //@synthesize entityClassName=_entityClassName - In the implementation block
@property (nonatomic,retain) TVHKDMAPEntityKind * DAMPEntityKind;                                                    //@synthesize DAMPEntityKind=_DAMPEntityKind - In the implementation block
@property (nonatomic,copy) NSString * DMAPShuffleSortArgumentValue;                                                  //@synthesize DMAPShuffleSortArgumentValue=_DMAPShuffleSortArgumentValue - In the implementation block
@property (nonatomic,copy) NSDictionary * ascendingDMAPSortArgumentValues;                                           //@synthesize ascendingDMAPSortArgumentValues=_ascendingDMAPSortArgumentValues - In the implementation block
@property (nonatomic,copy) NSDictionary * descendingDMAPSortArgumentValues;                                          //@synthesize descendingDMAPSortArgumentValues=_descendingDMAPSortArgumentValues - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityPropertyDescriptorCollection * propertyDescriptorCollecton;              //@synthesize propertyDescriptorCollecton=_propertyDescriptorCollecton - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyDescriptorByName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)entityClassName;
-(NSString *)DMAPShuffleSortArgumentValue;
-(id)propertyDescriptorForName:(id)arg1 ;
-(NSDictionary *)ascendingDMAPSortArgumentValues;
-(NSDictionary *)descendingDMAPSortArgumentValues;
-(NSDictionary *)propertyDescriptorByName;
-(void)setEntityClassName:(NSString *)arg1 ;
-(void)setDAMPEntityKind:(TVHKDMAPEntityKind *)arg1 ;
-(void)setAscendingDMAPSortArgumentValues:(NSDictionary *)arg1 ;
-(void)setDescendingDMAPSortArgumentValues:(NSDictionary *)arg1 ;
-(void)setPropertyDescriptorCollecton:(TVHKMediaEntityPropertyDescriptorCollection *)arg1 ;
-(id)sortingPropertyDescriptorForName:(id)arg1 ;
-(void)setDMAPShuffleSortArgumentValue:(NSString *)arg1 ;
-(TVHKMediaEntityPropertyDescriptorCollection *)propertyDescriptorCollecton;
-(TVHKDMAPEntityKind *)DAMPEntityKind;
@end

