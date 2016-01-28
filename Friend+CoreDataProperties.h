//
//  Friend+CoreDataProperties.h
//  BookClub
//
//  Created by Steven Yang on 1/27/16.
//  Copyright © 2016 Le Mont. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Friend.h"

NS_ASSUME_NONNULL_BEGIN

@interface Friend (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Book *> *reads;

@end

@interface Friend (CoreDataGeneratedAccessors)

- (void)addReadsObject:(Book *)value;
- (void)removeReadsObject:(Book *)value;
- (void)addReads:(NSSet<Book *> *)values;
- (void)removeReads:(NSSet<Book *> *)values;

@end

NS_ASSUME_NONNULL_END
